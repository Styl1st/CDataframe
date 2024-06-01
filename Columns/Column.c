//
// Created by denni on 30/05/2024.
//

#include "Column.h"
#include <stdlib.h>
#include <stdio.h>

COLUMN *create_column(char *title) {
    COLUMN *column = (COLUMN *) malloc(sizeof(COLUMN));
    column->title = title;
    column->physical_size = 10;
    column->logical_size = 0;
    column->data = (int *) malloc(sizeof(int) * column->physical_size);
    return column;
}

int insert_value(COLUMN *column, int value) {
    if (column->logical_size == column->physical_size) {
        column->physical_size *= 2;
        column->data = (int *) realloc(column->data, sizeof(int) * column->physical_size);
    }
    column->data[column->logical_size++] = value;
    return 0;
}

void delete_column(COLUMN **column) {
    free((*column)->data);
    free(*column);
    *column = NULL;
}

void print_column(COLUMN *column) {
    printf("%s\n", column->title);
    for (int i = 0; i < column->logical_size; i++) {
        printf("[%d]\t", i);
        printf("%d\n", column->data[i]);
    }
}