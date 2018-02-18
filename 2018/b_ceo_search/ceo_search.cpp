#include <iostream>  
#include <unordered_map>
using namespace std;

long GetNewCEOEmployeeLevel(int num_levels){
    long prev_level;
    long prev_level_employees;
    cin >> prev_level_employees;
    cin >> prev_level;

    long num_employees_without_manager = prev_level_employees;
    long max_level = prev_level;

    for (int j = 1; j < num_levels; ++j){
        long curr_level_employees;
        long curr_level;
        cin >> curr_level_employees;
        cin >> curr_level;
        
        long max_num_employees_with_manager_at_level = curr_level * curr_level_employees;
        num_employees_without_manager = (max_num_employees_with_manager_at_level - num_employees_without_manager) > 0 ?
            curr_level_employees : 
            (num_employees_without_manager - max_num_employees_with_manager_at_level + curr_level_employees);
        max_level = curr_level;
    }

    long ceo_level = max_level + 1;
    if (ceo_level < num_employees_without_manager){
        ceo_level = num_employees_without_manager;
    }

    return ceo_level;
}

int main() {
    int test_cases;
    cin >> test_cases;
  
    for (int i = 1; i <= test_cases; ++i) {
        int num_levels;
        cin >> num_levels;
        long ceo_level = GetNewCEOEmployeeLevel(num_levels);
        cout << "Case #" << i << ": " << ceo_level << endl;
    }

    return 0;
}