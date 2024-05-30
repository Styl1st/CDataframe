//
// Created by denni on 30/05/2024.
//

#ifndef UNTITLED_COLUMN_H
#define UNTITLED_COLUMN_H

typedef struct {
    char *title;
    int *data;
    int physical_size;
    int logical_size;
} COLUMN;

/**
 * Create a new column
 * @param : Columnn title
 * @return : pointer to created column
 */
COLUMN *create_column(char *title);

/**
 * Insert a value into the column
 * @param column : pointer to column
 * @param value : value to insert
 * @return : 0 if success, -1 if error
 */
int insert_value(COLUMN *column, int value);

/**
 * Delete a column
 * @param column : pointer to column
 */
void delete_column(COLUMN **column);

/**
 * Print the column
 * @param column : pointer to column
 */
void print_column(COLUMN *column);

#endif //UNTITLED_COLUMN_H
