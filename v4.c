#include <stdio.h>
int main()
{
  int a, b, c, english, hindi, gujarati, choice, user;

  printf("Press 1 for English\n");
  printf("Press 2 for Hindi\n");
  printf("Press 3 for Gujarati\n");
  printf("enter your choice");

  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    printf("your choice is english\n");

    printf("press 1 for internet recharge\n");
    printf("press 2 for Top-up recharge\n");
    printf("press 3 for Special recharge\n");

    printf("Enter your choice:");
    scanf("%d", &english);

    switch (english)
    {
    case 1:
      printf("you have successfully done your internet recharge\n");
      break;

    case 2:
      printf("you have successfully done your top-up recharge\n");
      break;

    case 3:
      printf("you have successfully done your special recharge\n");
      break;

    default:
      printf("invalid choice");
    }
    break;

  case 2:
    printf("your choice is hindi\n");

    printf("internet recharge ke liye 1 dabaiye\n");
    printf("top-up recharge ke liye 2 dabaiye\n");
    printf("special recharge ke liye 3 dabaiye\n");

    printf("Enter your choice:");
    scanf("%d", &hindi);

    switch (hindi)
    {
    case 1:
      printf("apne safaltapurvak internet recharge kar liya hai\n");
      break;

    case 2:
      printf("apne safaltapurvak top-up recharge kar liya hai\n");
      break;

    case 3:
      printf("apne safaltapurvak special recharge kar liya hai\n");
      break;

    default:
      printf("amany pasandgi");
      break;
    }
    break;

  case 3:
    printf("internet recharge mate 1 dabavo\n");
    printf("top-up recharge mate 2 dabavo\n");
    printf("special recharge mate 3 dabavo\n");

    printf("Enter your choice:");
    scanf("%d", &gujarati);

    switch (gujarati)
    {

    case 1:
      printf("tame safaltapurvak internet recharge karyu che\n");
      break;

    case 2:
      printf("tame safaltapurvak top-up recharge karyu che\n");
      break;

    case 3:
      printf("tame safaltapurvak special recharge karyu che\n");
      break;

    default:
      printf("amany pasandgi");
      break;
    }

    break;

  default:
    printf("invalid choice");
    break;
  }
}
