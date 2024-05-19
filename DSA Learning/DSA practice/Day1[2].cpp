#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

// **** UNION OF SETS ****

// int main()
// {

//     vector<int> a = {1, 2, 3, 4};
//     vector<int> b = {3, 4, 5, 6};

//     set<int> c;
//     for (int i = 0; i < a.size(); i++)
//     {
//         c.insert(a[i]); //  c = {1,2,3,4}
//     }

//     for (int i = 0; i < b.size(); i++)
//     {
//         c.insert(b[i]); // c = {1,2,3,4,5,6}
//     }
//     for (auto it = c.begin(); it != c.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     return 0;
// }

// **** INTERSECTION OF SETS ****

// int main()
// {
//     vector<int> a = {1, 7, 3, 4};
//     vector<int> b = {3, 4, 5, 6, 7, 8};

//     vector<int> c;

//     if (b.size() >= a.size())
//     {
//         for (int i = 0; i < a.size(); i++)
//         {
//             for (int j = 0; j < b.size(); j++)
//             {
//                 if (a[i] == b[j])
//                 {
//                     c.push_back(a[i]);
//                 }
//             }
//         }
//     }
//     cout << "A : ";
//     for (auto &k : a)
//     {
//         cout << k << " ";
//     }
//     cout << endl;
//     cout << "B : ";
//     for (auto &k : b)
//     {
//         cout << k << " ";
//     }
//     cout << endl;
//     cout << "Intersection => C : ";
//     for (auto &k : c)
//     {
//         cout << k << " ";
//     }
//     return 0;
// }

// **** DIFFERENCE OF SETS ****

// int main()
// {
//     vector<int> a = {3, 4, 5, 6, 7, 8};
//     vector<int> b = {3, 4, 5, 1, 9, 12};
//     vector<int> c;
//     vector<int> d;

//     // a - b
//     for (int i = 0; i < a.size(); i++)
//     {
//         bool found = false;
//         for (int j = 0; j < b.size(); j++)
//         {
//             if (a[i] == b[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             c.push_back(a[i]);
//         }
//     }
//     cout << "A-B \n";
//     for (auto &i : c)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     // b - a
//     for (int i = 0; i < b.size(); i++)
//     {
//         bool found = false;
//         for (int j = 0; j < a.size(); j++)
//         {
//             if (b[i] == a[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             d.push_back(b[i]);
//         }
//     }
//     cout << "B-A \n";
//     for (auto &i : d)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }