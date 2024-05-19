/*
     complement of a set , disjoint set , cartesian product of sets
*/

#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

// **** COMPLEMENT OF SET   i.e [ A' = U - A ]****

// int main()
// {
//     vector<int> a = {1, 2, 3, 4};
//     vector<int> b = {3, 4, 5, 6};
//     vector<int> c = {6, 7, 8, 9};

//     set<int> s;

//     vector<int> compliment_A;
//     vector<int> compliment_B;
//     vector<int> compliment_C;

//     for (int i = 0; i < a.size(); i++)
//     {
//         s.insert(a[i]);
//     }
//     for (int i = 0; i < b.size(); i++)
//     {
//         s.insert(b[i]);
//     }
//     for (int i = 0; i < c.size(); i++)
//     {
//         s.insert(c[i]);
//     }

//     vector<int> U(s.begin(), s.end());
//     cout << "Universal Set : \n";
//     for (int i = 0; i < U.size(); i++)
//     {
//         cout << U[i] << " ";
//     }

//     // **  A'  **

//     for (int j = 0; j < U.size(); j++)
//     {
//         bool found = false;
//         for (int k = 0; k < a.size(); k++)
//         {
//             if (U[j] == a[k])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             compliment_A.push_back(U[j]);
//         }
//     }
//     cout << endl
//          << "Compliment of A is : ";
//     for (auto &p : compliment_A)
//     {
//         cout << p << " ";
//     }

//     for (int j = 0; j < U.size(); j++)
//     {
//         bool found = false;
//         for (int k = 0; k < b.size(); k++)
//         {
//             if (U[j] == b[k])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             compliment_B.push_back(U[j]);
//         }
//     }
//     cout << endl
//          << "Compliment of B is : ";
//     for (auto &p : compliment_B)
//     {
//         cout << p << " ";
//     }

//     for (int j = 0; j < U.size(); j++)
//     {
//         bool found = false;
//         for (int k = 0; k < c.size(); k++)
//         {
//             if (U[j] == c[k])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             compliment_C.push_back(U[j]);
//         }
//     }
//     cout << endl
//          << "Compliment of C is : ";
//     for (auto &p : compliment_C)
//     {
//         cout << p << " ";
//     }

//     return 0;
// }

//   **** DISJOINT SETS ****

// int main()
// {

//     vector<int> a = {1, 2, 3, 4};
//     vector<int> b = {4, 5, 6, 7};
//     vector<int> c;

//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int j = 0; j < b.size(); j++)
//         {
//             if (a[i] == b[j])
//             {
//                 c.push_back(a[i]);
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
//     if (!c.size())
//     {
//         cout << "\nSets are Disjoint";
//     }
//     else
//     {
//         cout << "\nSets are not Disjoint , because common element's are : ";
//         for (auto &k : c)
//         {
//             cout << k << " ";
//         }
//     }

//     return 0;
// }

//     ****   CARTESIAN PRODUCT OF SETS   ****

int main()
{

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {4, 5, 6, 7};

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            cout << "{" << a[i] << "," << b[j] << "},"
                 << " ";
        }
    }

    return 0;
}