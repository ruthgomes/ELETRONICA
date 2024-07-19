import numpy as np
import matplotlib.pyplot as plt

# Definindo os parâmetros do circuito
R = 1000  # resistência em ohms
C = 1e-6  # capacitância em farads
V0 = 5    # tensão constante em volts
I0 = 0    # corrente inicial em amperes

# Definindo a constante de tempo
tau = R * C

# Definindo a função da corrente no tempo
def current(t, R, C, V0, I0):
    return (I0 - V0 / R) * np.exp(-t / (R * C)) + V0 / R

# Definindo o intervalo de tempo para a simulação
t = np.linspace(0, 5 * tau, 1000)  # de 0 a 5 constantes de tempo

# Calculando a corrente no tempo
i_t = current(t, R, C, V0, I0)

# Criando o gráfico
plt.figure(figsize=(10, 6))
plt.plot(t, i_t, label='Corrente i(t)', color='blue')
plt.axhline(y=V0 / R, color='red', linestyle='--', label='i(t) = V0 / R')
plt.title('Resposta do Circuito RC a uma Tensão Constante')
plt.xlabel('Tempo (s)')
plt.ylabel('Corrente (A)')
plt.legend()
plt.grid(True)
plt.show()