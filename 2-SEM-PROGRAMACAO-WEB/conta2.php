<?php

    $a=0;
    $b=5;
    $c=3;
    $d=9;

    $conta = ++$a - --$b + $c++ - --$d;

    echo "Valores finais <br>";
    echo "a = $a, b=$b, c=$c, d=$d, conta=$conta";

?>