#mirip kayak include iostream

import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_absolute_error


#data yang lagi dilatih
#boleh diubah sesuai kemauan datanya mau kayak gimana
#format: [umur, tinggi_badan, berat_badan]

data_orang = {
    'umur': [10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30],
    'tinggi_badan': [140, 150, 160, 170, 180, 190, 200, 190, 180, 170, 160],
    'berat_badan': [40, 50, 60, 70, 80, 90, 100, 90, 80, 70, 60]
}
df = pd.DataFrame(data_orang)


#memisahkan fitur (X) dan target berat badan (y)

X = df[['umur', 'tinggi_badan']]
y = df['berat_badan']


#model yang pengen dipakai
#disini ino pakai regresi linier

model_linear = LinearRegression()
model_linear.fit(X, y)


#model lainnya (hutan keputusan)

model_rf = RandomForestRegressor(n_estimators=100, random_state=42)
model_rf.fit(X, y)


#prediksi data baru
#angka dibawah boleh di edit sebebasnya
#format : [umur, tinggi_badan, berat_badan]

input_umur = int(input("Masukkan umur: "))
input_tinggi = int(input("Masukkan tinggi badan: "))

orang_misteri = [[input_umur, input_tinggi]] 


#AI bakal bikin prediksi

prediksi_lin = model_linear.predict(orang_misteri)
prediksi_rf = model_rf.predict(orang_misteri)


#kode bakal print hasilnya

print("-" * 40)
print(f"SPESIFIKASI ORANG: {orang_misteri[0][0]}thn, {orang_misteri[0][1]}cm")
print("-" * 40)
print(f"Prediksi Linear Reg  : {prediksi_lin[0]:.2f}kg")
print(f"Prediksi Random Forest: {prediksi_rf[0]:.2f}kg")
print("-" * 40)
print("Analisa: Jika hasilnya beda, Random Forest biasanya lebih akurat \nkarena dia belajar pola non-linear.")