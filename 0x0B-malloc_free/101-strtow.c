#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * is_space - A function that chexck if a
 * character c is a space, tab, or newline
 * @c: An input string
 * Return: NULL if str == NULL or str == ""
 */


int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_str - A function that counts the number of word in a given string
 * @str: An input string
 * Return: String
 */

int count_str(char *str)
{
	int str_count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			str_count++;
			in_word = 1;
		}
		str++;
	}
	return (str_count);
}

/**
 * strdup_word - A function that duplicates a word from a given string
 * @str: an input string
 * Return: Total count of a word in the string
 */

char *strdup_word(char *str)
{
	char *word_start = str;
	int word_len = 0;

	while (*str && !is_space(*str))
	{
		word_len++;
		str++;
	}
	return (strndup(word_start, word_len));
}


/**
 * strtow - A function that splits a string into words
 * @str: An input string
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **words;
	int word_count = count_str(str);
	int in_word = 0;
	int word_index = 0;
	int i = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			words[word_index] = strdup_word(str);
			if (words[word_index] == NULL)
			{
				for (; i < word_index; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			word_index++;
			in_word = 1;
		}
		str++;
	}

	words[word_index] = NULL;

	return (words);
}
