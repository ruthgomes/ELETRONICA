import numpy as np
import matplotlib.pyplot as plt

# Parâmetros do circuito
L = 1  # Indutância em henrys (H)
R = 1  # Resistência em ohms (Ω)
V0 = 5  # Amplitude da voltagem em volts (V)
omega = 2*np.pi  # Frequência angular em rad/s

# Definindo a função da voltagem de entrada
def V(t):
    return V0 * np.sin(omega * t)

# Definindo a equação diferencial
def RL_circuit(t, i):
    return (V(t) - R*i) / L

# Método de Euler para resolver a equação diferencial
def euler_method(h, t_values):
    i_values = [0]  # Condição inicial: corrente inicial é zero
    for t in t_values[1:]:
        i_new = i_values[-1] + h * RL_circuit(t, i_values[-1])
        i_values.append(i_new)
    return i_values

# Parâmetros para o método de Euler
t_start = 0
t_end = 10
num_points = 1000
h = (t_end - t_start) / num_points

# Gerando os valores de tempo
t_values = np.linspace(t_start, t_end, num_points)

# Resolvendo a equação diferencial usando o método de Euler
i_values = euler_method(h, t_values)

# Plotando o gráfico da corrente em função do tempo
plt.plot(t_values, i_values)
plt.xlabel('Tempo (s)')
plt.ylabel('Corrente (A)')
plt.title('Comportamento da corrente em um circuito RL')
plt.grid(True)
plt.show()