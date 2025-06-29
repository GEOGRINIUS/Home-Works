//Prototypes.h
#pragma once
const int ROWS = 3;
const int COLS = 4;

void minMaxValueIn(int arr[], const int n, int& min, int& max);
void minMaxValueIn(double arr[], const int n, double& min, double& max);
void minMaxValueIn(int arr[][COLS], const int ROWS, const int COLS, int& min, int& max);
void minMaxValueIn(double arr[][COLS], const int ROWS, const int COLS, double& min, double& max);

void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(int arr[][COLS], const int ROWS, const int COLS);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[][COLS], const int ROWS, const int COLS);
double Sum(double arr[][COLS], const int ROWS, const int COLS);

double Average(int arr[], const int n);
double Average(double arr[], const int n);
double Average(int arr[][COLS], const int ROWS, const int COLS);
double Average(double arr[][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[][COLS], const int ROWS, const int COLS);
void Sort(double arr[][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[], const int n);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
#pragma once