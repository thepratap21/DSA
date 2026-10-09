
#include <bits/stdc++.h>
using namespace std;

int allocateBooks(vector<int>& pages, int students)
{
    int n = pages.size();

    // More students than books: allocation impossible
    if(students > n)
        return -1;

    // Minimum possible maximum pages
    int low = *max_element(pages.begin(), pages.end());

    // Maximum possible pages
    int high = 0;
    for(int i = 0; i < n; i++)
    {
        high += pages[i];
    }

    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int requiredStudents = 1;
        int sum = 0;

        // Calculate students needed for capacity mid
        for(int i = 0; i < n; i++)
        {
            if(sum + pages[i] <= mid)
            {
                sum += pages[i];
            }
            else
            {
                requiredStudents++;
                sum = pages[i];
            }
        }

        if(requiredStudents <= students)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    vector<int> pages(n);

    cout << "Enter pages in each book: ";
    for(auto &it : pages)
    {
        cin >> it;
    }

    int students;
    cout << "Enter number of students: ";
    cin >> students;

    cout << "Minimum maximum pages = "
         << allocateBooks(pages, students);

    return 0;
}
