// #include<iostream>
// #include<vector>
// using namespace std;

//     string maximumOccurance(vector<string>name)
//     {
//         char arr[26] ={0};
//         for(int i=0;i<name.size();i++)
//         {
//              char ch =name[i];
//             int number =0;
//              if(ch>='a' && ch<='z')
//              {  
//                 number = ch-'a';
//              }
//              else
//              {
//                 number = ch-'A';
//              }
//              arr[number]++;
//         }

//         for(int i=0;i<26;i++)
//         {
//             int maxi=-1;
//             int ans=0;

//             if(maxi<arr[i])
//             {
//                 ans=i;
//                 maxi=arr[i];
//             }
//             char result = 'a' + ans; //
//         }


//         return string(1, result);
//     }

// int main()
// {
//     vector<string>name(1);
//     cout<<"Enter the String"<<endl;
//     for(int i=0;i<name.size();i++)
//     {
//         cin>>name[i];
//     }
    
//     for(int i=0;i<name.size();i++)
//     {
//         cout<<name[i]+" ";
//     }


// }