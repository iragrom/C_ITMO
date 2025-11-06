// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
  int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int min_val = *min_element(nums.begin(), nums.end());
    int count = 0;
    for(int num : nums) {
        if(num == min_val) count++;
    }
    cout << count << endl;
    return 0;
}