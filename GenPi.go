package main

import (
	"fmt"
	"math"
	"math/rand"
	"time"
)


func main(){
	start := time.Now() //начало выполнения
	fmt.Println("Array range is 10 000 000")
	var x [10000000]float32		//два массива х и у для точек
	var y [10000000]float32
	var n_kr int = 0	//переменная количества точек, попавших в окружность

	rand.Seed(time.Now().UnixNano())	//чтобы рандом был рандомом
	for i:=0;i<10000000;i++{	//заполняем
		x[i]=rand.Float32()
		y[i]=rand.Float32()
	}

	for i:=0; i<10000000; i++{
		if math.Pow(float64(x[i]),2) + math.Pow(float64(y[i]), 2) <=1{		//согласно формуле x^2 + y^2 <=1 - точка лежит внути окружности
			n_kr++		//кол-во точек в окружности
		}
	}

	fmt.Printf("%f\n", 4*float32(n_kr)/ 10000000)		//число пи: 4*попавших_в_кург / всего
	elapsed := time.Since(start)		//время спустя начало таймера
	fmt.Printf("Time of execution %s", elapsed)		//сколько выполнялась программа. Питон: ~16с, Си: ~0,5с, Го: ~1c
}
