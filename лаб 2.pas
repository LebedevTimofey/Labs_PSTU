uses crt;
var a,b,k:integer;
begin
  randomize;
  a:=random(101);
  writeln('Вводите числа от 1 до 100, пока не угадаете задуманное число');
  k:=1;
  repeat 
    read(b);
    if k>5 then begin
    writeln('вы проиграли');
    break;
    end
    else
    if b>a then writeln('моё число меньше')
    else if b<a then writeln('моё число больше')
    else if a=b then writeln('Поздравляю,вы угадали');
    inc(k);
  until a=b;
  writeln('количество попыток=',k,'правильное число=',a); 
end.
