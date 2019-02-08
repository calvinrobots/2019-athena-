#include <kipr/botball.h>

     


int main()
{
    printf("Hello World\n");
    create_connect();
    mrp(0,400,2600);
    mrp(3,400,2600);
    msleep(10000); // set claw
    
    create_drive(50,100);
    msleep(4000); // turn left
    
    camera_open();
  while (digital(0) == 0)
  {
    camera_update();
      
  if (get_object_count(0) > 0)
      {
        int x = get_object_center_x(0,0); 
        int y = get_object_center_y(0,0);
      
         if (x > 65)
         {
          create_drive(100,100);
          msleep(1000);
         }
      
        else if (x < 55)
      {
        create_drive(100,100);
        msleep(1000); 
     }
         else 
         {
           motor(4,100);
           motor(2,100);
         }
      
       if (y > 59)
         {
           motor(0,0);
           motor(3,0);
           

         }
        if (y < 60)
        { 
            motor(0,100);
            motor(3,100);
        }
  
  } 
     
      
      
 }    
    
    
    return 0;
}
