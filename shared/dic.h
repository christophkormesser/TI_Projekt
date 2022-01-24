#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct dictionary{
    int key;
    char text[10];
} Dictionary;

/**
 * @brief Function for filling a dictionary with random values
 *
 * @param dictionary
 * @param size
 */
void fill_dictionary_with_random_values(Dictionary *dictionary, int size);

/**
 * @brief look up integer key in the dictionary
 *
 * @param dictionary
 * @param size
 * @param key
 * @return 0 if key exist in dictionary else 1
 *
 * @see search_text
 */
int search_key(Dictionary *dictionary, int size, int key);

/**
 * @brief look up string text in the dictionary
 *
 * @param dictionary
 * @param size
 * @param string
 * @return 0 if text exist in dictionary else 1
 *
 * @see search_key
 */
int search_text(Dictionary *dictionary, int size, const char *string);

#endif //DICTIONARY_H
