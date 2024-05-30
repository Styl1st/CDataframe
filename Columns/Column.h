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

#endif //UNTITLED_COLUMN_H
