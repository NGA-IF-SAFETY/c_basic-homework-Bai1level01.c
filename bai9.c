#include <stdio.h>

   void main ()

{

   int ngay,thang,nam, ngayCu;

   nam= ngay/365;

   thang=(ngay-(nam*365))/30;

   ngay=ngay-(nam*365)-(thang*30);

   printf("%d:=%d thang %d nam %d ngay", ngay ,thang ,nam ,ngayCu);

}
