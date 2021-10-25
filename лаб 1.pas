var s,x,a,b,c,c1,c2,c3:integer;f:boolean;
begin
  readln(x);
  while (x<100) or (x>999) do readln(x);
    a:=x mod 10;
    x:=x div 10;
    c:=x mod 10;
    b:=x div 10;
     while f=false do
       if (a=c) or (c=b) or (b=a) then begin
         readln(x);
         a:=x mod 10;
         x:=x div 10;
         c:=x mod 10;
         b:=x div 10;
       end 
       else f:=true;
       writeln(a,b,c);
       writeln(a,c,b);
       writeln(b,a,c);
       writeln(b,c,a);
       writeln(c,a,b);
       writeln(c,b,a);
       s:=a+b+c;
       c1:=max(a,max(b,c));
       c3:=min(a,min(b,c));
       c2:=s-c1-c3;
       writeln(c1,c2,c3);
end.