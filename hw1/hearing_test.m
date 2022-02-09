clc; clear;

f = 100; % Change this value from 20 Hz ~ 20 kHz

fs = 44100;
n = 0 : fs - 1;
A = 1;
x = A * cos(2 * pi * f * n / fs);

sound(x, fs)
