program quicksort;

type
  arr = array of integer;

var
  count : integer;
  data : arr;

// Pass by reference here in order to sort the data in the same address space.
// Same code from Baeza Yates Book, but translated to Pascal.
procedure QSort(var r: array of integer; low, high: integer);
var i,j,temp : integer;
begin
  while high > low do
  begin
       i:= low;
       j:= high;
       temp:= r[low];
       while i < j do
       begin
            while r[j] > temp do
            begin
                 j := j-1;
            end;
            r[i] := r[j];
            while (i < j) and (r[i] <= temp) do
            begin
                 i:= i+1;
            end;
            r[j] := r[i];
       end;
       r[i] := temp;
       QSort(r, low, i-1);
       low:= i+1;
  end;
end;

begin
   data := [11,10,9,2,13,5,4,3,1];

   QSort(data, 0, length(data));
   for count := 0 to length(data) -1 do
         begin
              write(data[count], ' ');
         end;
   readln();
end.
