
class BrowserHistory {
public:
    list<string> l;
    list<string>::iterator it;
    BrowserHistory(string homepage) {
        l.push_back(homepage);
        it=l.begin();
    }
    
    void visit(string url) {
       list<string>::iterator del=it;
       del++;
       l.erase(del,l.end());
       l.push_back(url);
       it++; 
    }
    
    string back(int step) {
        while(it!=l.begin()&&step--)
        {it--;}
        return *it;
    }
    
    string forward(int step) {
          while(it!=(--l.end())&&step-- )
        {it++;}
        return *it;
    }
};

/**
using iterator
 */
