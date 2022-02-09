clc; clear;

[x, fs] = audioread('bradleytylerho.wav');

N = length(x);
n = 0 : N - 1;
plot(n, x)

OM = 0 : 0.01 : pi;
X = exp(-j * OM' * n) * x;

f = OM * fs / (2 * pi);
figure;
plot(f, abs(X))
