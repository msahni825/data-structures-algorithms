class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    
    struct Trie{
        Trie *children[26];
        string word;
        Trie(){
            word="";
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
        }
    };
    
    Trie* root;
    vector<string> ans;
    
    void insert(Trie* root,string s){
        Trie* head=root;
        for(int i=0;i<s.size();i++){
            if(head->children[s[i]-'a']==NULL){
                head->children[s[i]-'a']=new Trie();
            }
            head=head->children[s[i]-'a'];
        }
        head->word=s;
    }
    
    void dfs(int x, int y, vector<vector<char>>& board, Trie* node){
        char ch=board[x][y];
        node=node->children[ch-'a'];
        if(node->word!=""){
            ans.push_back(node->word);
            node->word="";
        }
        board[x][y]='#';
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0 && nx<board.size() && ny>=0 && ny<board[0].size() && board[nx][ny]!='#' && 
              node->children[board[nx][ny]-'a']!=NULL){
                dfs(nx,ny,board,node);
            }
        }
            board[x][y]=ch;
            return;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        root=new Trie();
        for(auto word:words){
            insert(root,word);
        }   
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(root->children[board[i][j]-'a']!=NULL){
                    dfs(i,j,board,root);
                }
            }
        }
        return ans;
    }
};
