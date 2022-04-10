#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int s, int e, int mid)
{

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1];
    int second[len2];

    int index = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = v[index + i];
    }
    index = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = v[index + i];
    }

    int ind1 = 0;
    int ind2 = 0;
    index = s;

    while (ind1 < len1 && ind2 < len2)
    {

        if (first[ind1] < second[ind2])
            v[index++] = first[ind1++];

        else
            v[index++] = second[ind2++];
    }

    while (ind1 < len1)
    {
        v[index++] = first[ind1++];
    }

    while (ind2 < len2)
    {
        v[index++] = second[ind2++];
    }
}

void mergesort(vector<int> &v, int s, int e)
{


    if (s < e)
    {
        int mid = s + (e - s) / 2;
        mergesort(v, 0, mid);
        mergesort(v, mid + 1, e);
        merge(v, s, e, mid);
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> a;
    int i;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    mergesort(a, 0, a.size() - 1);

    for (auto itr : a)
    {
        cout << itr << " ";
    }
    return 0;
}