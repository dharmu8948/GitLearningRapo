 int xIndex = -1;
        int yIndex =-1;
        int min  = Integer.MAX_VALUE;
        
       for(int i = 0; i < n ; i++ ){
           if(arr[i] == x ){
               xIndex = i; 
           }
           
           else if(arr[i] == y){
               yIndex = i;
           }
           
         if( xIndex >= 0  && yIndex >= 0){
             int diff =   Math.abs(xIndex-yIndex);
             if(diff<min){
                 min=diff;
             }
             xIndex =-1;
             yIndex = -1;
             --i;
           }

       }
       
      if( min < Integer.MAX_VALUE){
           return min;
       }
      else{       
       return -1;
      }