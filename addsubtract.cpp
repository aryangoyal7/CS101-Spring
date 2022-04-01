#include<simplecpp>

main_program{
    int n, ans =0 ;
    cin>>n;
    int ab;
	

    
    
    repeat(n){ 
        cin>>ab;
    if(ab == 1){
        ans = ans + 1;
    
    }
    else if(ab%2 == 0){
        ans  = ans - ab;
        
    }
    else{
        ans = ans + ab;
    
    }

    }
    cout<<ans;
    
    

}