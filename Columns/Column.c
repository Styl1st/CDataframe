//
// Created by denni on 30/05/2024.
//

#include "Column.h"
#include <stdlib.h>

COLUMN *create_column(char *title) {
    COLUMN *column = (COLUMN *) malloc(sizeof(COLUMN));
    column->title = title;
    column->physical_size = 10;
    column->logical_size = 0;
    column->data = (int *) malloc(sizeof(int) * column->physical_size);
    return column;
}