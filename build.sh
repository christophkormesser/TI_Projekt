gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"sorting_algorithms/bubble_sort.d" -MT"sorting_algorithms/bubble_sort.o" -o "sorting_algorithms/bubble_sort.o" "sorting_algorithms/bubble_sort.c"

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"sorting_algorithms/bubble_sort_2k.d" -MT"sorting_algorithms/bubble_sort_2k.o" -o "sorting_algorithms/bubble_sort_2k.o" "sorting_algorithms/bubble_sort_2k.c"

 
gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"sorting_algorithms/insertion_ll.d" -MT"sorting_algorithms/insertion_ll.o" -o "sorting_algorithms/insertion_ll.o" "sorting_algorithms/insertion_ll.c"

 
gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"sorting_algorithms/insertion_sort.d" -MT"sorting_algorithms/insertion_sort.o" -o "sorting_algorithms/insertion_sort.o" "sorting_algorithms/insertion_sort.c"

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"sorting_algorithms/merge_sort.d" -MT"sorting_algorithms/merge_sort.o" -o "sorting_algorithms/merge_sort.o" "sorting_algorithms/merge_sort.c"
 

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"sorting_algorithms/quick_sort.d" -MT"sorting_algorithms/quick_sort.o" -o "sorting_algorithms/quick_sort.o" "sorting_algorithms/quick_sort.c"

 
gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/compare_list.d" -MT"shared/compare_list.o" -o "shared/compare_list.o" "shared/compare_list.c"


gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/copy_array.d" -MT"shared/copy_array.o" -o "shared/copy_array.o" "shared/copy_array.c"
 

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/create_array.d" -MT"shared/create_array.o" -o "shared/create_array.o" "shared/create_array.c"


gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/key_value_list.d" -MT"shared/key_value_list.o" -o "shared/key_value_list.o" "shared/key_value_list.c"

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/list_funcs.d" -MT"shared/list_funcs.o" -o "shared/list_funcs.o" "shared/list_funcs.c"

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/random_number.d" -MT"shared/random_number.o" -o "shared/random_number.o" "shared/random_number.c"

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/runtime.d" -MT"shared/runtime.o" -o "shared/runtime.o" "shared/runtime.c"

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"shared/runtime_list.d" -MT"shared/runtime_list.o" -o "shared/runtime_list.o" "shared/runtime_list.c"

gcc -O0 -g3 -pedantic -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"main.d" -MT"main.o" -o "main.o" "main.c"

gcc  -o "TI_Projekt"  ./sorting_algorithms/bubble_sort.o ./sorting_algorithms/bubble_sort_2k.o ./sorting_algorithms/insertion_ll.o ./sorting_algorithms/insertion_sort.o ./sorting_algorithms/merge_sort.o ./sorting_algorithms/quick_sort.o  ./shared/compare_list.o ./shared/copy_array.o ./shared/create_array.o ./shared/key_value_list.o ./shared/list_funcs.o ./shared/random_number.o ./shared/runtime.o ./shared/runtime_list.o  ./main.o

rm *.o
rm *.d