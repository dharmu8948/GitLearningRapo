 
 // source => https://practice.geeksforgeeks.org/problems/getline-and-ignore/1/?track=module-1-basics-and-control-structures&batchId=113
 void getLineAndIgnore(){
    
    string a, d;
    int b;
    getline(cin,a);
    cin>>b;
    cin.ignore();
    getline(cin,d);
    
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}
