#include <bits/stdc++.h>
using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    Difference(vector<int> arr)
    {
        elements = arr;
        sort(elements.begin(), elements.end());
    }

    void computeDifference()
    {
        maximumDifference = elements[elements.size() - 1] - elements[0];
    }

    void computeDifferenceAlternative()
    {
        int min = elements[0], max = elements[0];
        for (int i = 1; i < elements.size(); i++)
        {
            if (elements[i] > max)
            {
                max = elements[i];
            }
            if (elements[i] < min)
            {
                min = elements[i];
            }
        }
        maximumDifference = max - min;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    Difference difference(numbers);
    difference.computeDifference();
    cout << difference.maximumDifference << endl;
    return 0;
}