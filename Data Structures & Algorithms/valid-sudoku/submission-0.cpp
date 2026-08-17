class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>hash;
        for(int i =0 ; i<9; i++){
            for(int j=0 ; j<9; j++){
                if (board[i][j]!='.'){
                    if(hash.count(board[i][j])==1){
                        cout << "1i=" <<i<<endl;
                        cout<<"1j=" <<j<<endl;
                        return false;
                    }else{
                        hash[board[i][j]]++;
                    }
                }
            }hash.clear();
        }
        for(int i =0 ; i<9; i++){
            for(int j=0 ; j<9; j++){
                if (board[j][i]!='.'){
                    if(hash.count(board[j][i])==1){
                        cout<<"2i=" <<i<<endl;
                        cout<<"2j=" <<j<<endl;
                        return false;
                    }else{
                        hash[board[j][i]]++;
                    }
                }
            }hash.clear();
        }
        for(int n=0;n<3;n++){
            for(int m=0;m<3;m++){
                for(int i=n*3;i<n*3+3;i++){
                    for(int j=m*3;j<m*3+3;j++){
                        if (board[i][j]!='.'){
                            if(hash.count(board[i][j])==1){
                                cout<<"3n="<<n<<endl;
                                cout<<"3m="<<m<<endl;
                                cout<<"3i="<<i<<endl;
                                cout<<"3j="<<j<<endl;
                                return false;
                            }else{
                                hash[board[i][j]]++;
                            }
                        }
                    }
                }hash.clear();
            }
        }
        return true;
    }
};
