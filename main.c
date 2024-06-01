#include <stdio.h>
#include "Columns/Column.h"
#include <stdlib.h>


int main(void) {

    COLUMN *column = create_column("ez project");
    insert_value(column, 10);
    insert_value(column, 20);
    insert_value(column, 30);
    print_column(column);

    return 0;
}
