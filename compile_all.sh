#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-shell_sort.c print_array.c -o shell
gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-cocktail_sort_list.c print_list.c -o cocktail
gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-counting_sort.c print_array.c -o counting
gcc -Wall -Wextra -Werror -pedantic 103-main.c 103-merge_sort.c print_array.c -o merge
gcc -Wall -Wextra -Werror -pedantic 104-main.c 104-heap_sort.c print_array.c -o heap
gcc -Wall -Wextra -Werror -pedantic 105-main.c 105-radix_sort.c print_array.c -o radix
gcc -Wall -Wextra -Werror -pedantic 106-main.c 106-bitonic_sort.c print_array.c -o bitonic
gcc -Wall -Wextra -Werror -pedantic 107-main.c 107-quick_sort_hoare.c print_array.c -o quick
gcc -Wall -Wextra -Werror -pedantic 1000-main.c 1000-sort_deck.c -o deck
echo "Compilation process finish successfully"