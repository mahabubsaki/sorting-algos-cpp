#include <bits/stdc++.h>
using namespace std;
vector<int> merging(vector<int> fullArr)
{

    int fullArrSize = fullArr.size();
    if (fullArrSize <= 1)
        return fullArr;
    int middle = fullArrSize / 2;
    vector<int> leftSide;
    vector<int> rightSide;
    for (int i = 0; i < middle; i++)
        leftSide.push_back(fullArr[i]);
    for (int i = middle; i < fullArrSize; i++)
        rightSide.push_back(fullArr[i]);
    vector<int> sortedLeft = merging(leftSide);
    vector<int> sortedRight = merging(rightSide);
    vector<int> sortedFull;
    int leftIndex = 0, leftArrSize = sortedLeft.size();
    int rightIndex = 0, rightArrSize = sortedRight.size();
    for (int i = 0; i < fullArrSize; i++)
    {
        if (leftIndex == leftArrSize)
        {
            sortedFull.push_back(sortedRight[rightIndex]);
            rightIndex++;
        }
        else if (rightIndex == rightArrSize)
        {
            sortedFull.push_back(sortedLeft[leftIndex]);
        }
        else if (sortedLeft[leftIndex] > sortedRight[rightIndex])
        {
            sortedFull.push_back(sortedRight[rightIndex]);
            rightIndex++;
        }
        else
        {
            sortedFull.push_back(sortedLeft[leftIndex]);
            leftIndex++;
        }
    }
    return sortedFull;
};
int main()
{
    vector<int> input = {6, 3, 85, 4, 12, 45, 4, 35, 86, 1};
    vector<int> output = merging(input);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    };
}