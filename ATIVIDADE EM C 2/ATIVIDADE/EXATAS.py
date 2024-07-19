import numpy as np
import matplotlib.pyplot as plt

# Parâmetros do circuito
R = 1000  # Resistência em ohms
C = 1e-6  # Capacitância em farads
V0 = 5    # Tensão constante em volts

# Função que descreve q(t)
def q(t, R, C, V0):
    return V0 * C * (1 - np.exp(-t / (R * C)))

# Gerar dados de tempo
t = np.linspace(0, 0.01, 1000)  # tempo de 0 a 10 ms

# Calcular q(t) para cada valor de t
q_t = q(t, R, C, V0)

# Plotar os resultados
plt.figure(figsize=(10, 6))
plt.plot(t, q_t, label='q(t) = V0 * C * (1 - exp(-t / (R * C)))')
plt.xlabel('Tempo (s)')
plt.ylabel('Carga (Coulombs)')
plt.title('Carga no Capacitor em um Circuito RC')
plt.legend()
plt.grid(True)
plt.show()