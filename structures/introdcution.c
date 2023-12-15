// we can use structures of user defined data structures.

// To provide better clarity of our programmes we can use the strucutres.


#include <stdio.h>

struct point{
  int x, y;
} ;

int main(){
    // struct point p;
    // p.x = 5;
    // p.y = 7;
    // printf("%d %d", p.x, p.y);  // 5 7
    
    // or
    
    struct point p = {5,7};
    printf("%d %d", p.x, p.y);  //5 7
    return 0;
}

// we declare structures like this
//  struct point{
//    int x, y;
//  };

// so, here point gives meanning to the x,y that they can be co-ordinates of some point.
// we can assign values using . after structure is assigned with some varaible. here P is that variable and we can assign p.x=5, p.y=7;





// we can also define the variables p1,p2 directly like this. instead calling in main struct point p1, struct point p2



#include <stdio.h>

struct point{
  int x, y;
} p1, p2;

int main(){
 
    
    p1.x=5, p1.y=7;
    p2.x= 8, p2.y=9;   
    printf("%d %d\n", p1.x, p1.y);  //5 7
    printf("%d %d", p2.x, p2.y);
    return 0;
}