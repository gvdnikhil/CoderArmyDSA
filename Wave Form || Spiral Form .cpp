#include<iostream>
#include<vector>

using namespace std;

class waveform 
{
public:
    int a, b;
    vector<vector<int>> matrix;

    waveform() {
        cout << "Enter the rows and columns: ";
        cin >> a >> b;
    

    
        matrix.resize(a, vector<int>(b));
        cout << "Enter the matrix elements:\n";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }



    void display()
    {
       
        
            for (int j = 0; j < b; j++)
            {
                if (j%2 ==0)
                {
                    for (int i =0;i<a;i++)
                    {
                        cout<< matrix[i][j]<<" ";
                    }
                }
                else 
                {
                    
                    for (int i=a-1;i>=0;i--)
                    {
                        cout<< matrix[i][j]<<" ";
                    }
                
                }

                cout << endl;       
                
            }
            
        
    }
};








class spiral
{
    public:
    int a,b;
   vector<vector<int>> matrix;
    
    spiral()
    {
        cout<<"ENter the rows and columns"<<endl;
        cin>>a>>b;
        matrix.resize(a,vector<int>(b));
        
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> matrix[i][j];
            }
        }

        
    }
    void display()
        {
            int row_end =a-1,row_start =0,col_start =0, col_end = b-1;

            while (row_end > row_start)
            {

                //right
                for (int j=col_start;j<=col_end;j++)
                {
                    cout<< matrix[row_start][j]<< " ";
                }
                row_start++;
                

                // down 
                for (int i = row_start;i<=row_end;i++)
                {
                    cout<< matrix[i][col_end]<<" ";
                }
                col_end--;

                // left 
            if (col_end >= col_start)
                {
                for (int j= col_end;j>=col_start;j--)
                {
                    cout<< matrix[row_end][j]<<" ";
                }
               
                }
                 row_end--;

                
                // up 


                 if (row_end >= row_start){
                for ( int i=row_end;i>= row_start;i--)
                {
                    cout<<matrix[i][col_start]<<" ";
                }
                
                 }

                col_start++;
            }



        }
};











int main()
{
    // waveform p1;
    // p1.display();


    spiral p2;
    p2.display();

    return 0;
}
