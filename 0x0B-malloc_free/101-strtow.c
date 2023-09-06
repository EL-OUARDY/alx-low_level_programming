#include <stdio.h>
#include <stdlib.h>

char *ClearString(char *str);
char *GetSingleWord(char *str, int word_index);
int StringLength(char *str);
int CountExtraSpace(char *str);

/**
 * strtow - split a string of words into individual words
 * @str: a given string
 * Description: output an array of strings extracted from the source string
 * Return: array of strings
 */
char **strtow(char *str)
{
	int i, j, words_count = 0;
	char **words;
	char *word;
	char *cleared_string;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* remove extra spaces */
	cleared_string = ClearString(str);

	if (cleared_string == NULL)
		return (NULL);

	/* count how many words in the string */
	/* number of words = ( number of spaces + 1) */
	for (i = 0; cleared_string[i]; i++)
	{
		if (cleared_string[i] == ' ')
			words_count++;
	}
	words_count++;

	/* reserve memory for words*/
	words = (char **)malloc(sizeof(char *) * words_count + 1);

	/* insert individual words to words array */
	for (i = 0; i < words_count; i++)
	{
		word = GetSingleWord(cleared_string, i);
		/* reserve memory for each individual string */
		words[i] = (char *)malloc(sizeof(char) * StringLength(word) + 1);
		if (words[i] == NULL)
			return (NULL);

		/* words[i] = word; */
		for (j = 0; word[j]; j++)
			words[i][j] = word[j];
		words[i][j] = '\0';
	}
	/* words[i] = NULL; */

	return (words);
}

/**
 * ClearString - Remove extra spaces
 * @str: a given string
 * Description: remove extra spaces from a string
 * Return: a clearn strings without extra spaces
 */
char *ClearString(char *str)
{
	int i, j, last_is_space = 0, len = 0;
	char *cleared_string;

	len = StringLength(str);
	len -= CountExtraSpace(str);

	if (len <= 0)
		return (NULL);

	cleared_string = (char *)malloc(sizeof(char) * len + 1);

	if (cleared_string == NULL)
		return (NULL);

	/* copy str to cleared_string */
	for (i = 0, j = 0; (str[i] && j < len); i++)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			if (i == 0)
			{
				last_is_space = 1;
			}
			else if (last_is_space == 0)
			{
				cleared_string[j++] = str[i];
				last_is_space = 1;
			}
		}
		else
		{
			cleared_string[j++] = str[i];
			last_is_space = 0;
		}
	}
	cleared_string[j] = '\0';

	/*
	 * int length = StringLength(str);
	 * printf("BEFORE: %s | length = %d\n", str, length);
	 * length = StringLength(cleared_string);
	 * printf("AFTER: %s | length = %d\n", cleared_string, length);
	 */

	return (cleared_string);
}

/**
 * GetSingleWord - extract single word from a string of words
 * @str: a given string of words
 * @index: the index of targted word (start from 0)
 * Description: look for a word at a given index
 * Return: a single word
 */
char *GetSingleWord(char *str, int index)
{
	int i, word_index = 0, foundAt = -1, characters_count = 0;
	char *word;

	for (i = 0; str[i]; i++)
	{
		if (index == 0)
			foundAt = 0;

		if (foundAt != -1)
		{
			if (str[i] == ' ')
				break;
			characters_count++;
		}
		else if (foundAt == -1)
		{
			if (str[i] == ' ')
				word_index++;

			if (word_index == index)
				foundAt = (i + 1);
		}
	}
	word = malloc(sizeof(char) * characters_count + 1);

	if (word == NULL)
		return (NULL);

	/* fill string */
	i = 0;
	while (characters_count--)
	{
		word[i] = str[foundAt + i];
		i++;
	}
	word[i] = '\0';

	return (word);
}

/**
 * StringLength - Length of string
 * @str: a given string
 * Description: count the length of a given string
 * Return: integer
 */
int StringLength(char *str)
{
	int i, length = 0;

	for (i = 0; str[i]; i++)
		length++;

	return (length);
}

/**
 * CountExtraSpace - extra spaces count
 * @str: a given string
 * Description: how many extra spaces @str contains (spaces and \n)
 * Return: the count of extra spaces (end of a line)
 */
int CountExtraSpace(char *str)
{
	int i, _extra_spaces = 0, _last_is_space = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			if (i == 0)
			{
				_last_is_space = 1;
				_extra_spaces++;
			}
			else if (_last_is_space == 1)
			{
				_extra_spaces++;
			}
			else if (_last_is_space == 0)
			{
				_last_is_space = 1;
			}
		}
		else
		{
			_last_is_space = 0;
		}
	}

	/* check end of string */
	if (str[StringLength(str) - 1] == ' ' || str[StringLength(str) - 1] == '\n')
		_extra_spaces++;

	return (_extra_spaces);
}

