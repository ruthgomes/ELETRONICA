import numpy as np
from scipy.integrate import solve_ivp
import matplotlib.pyplot as plt

# Definindo os parâmetros do circuito
L = 1.0  # Indutância em Henrys
R = 1.0  # Resistência em Ohms
C = 0.5  # Capacitância em Farads
V0 = 10.0  # Voltagem constante em Volts

# Definindo o sistema de equações diferenciais
def rlc_circuit(t, y):
    y1, y2 = y
    dy1_dt = y2
    dy2_dt = (V0 - R * y2 - y1 / C) / L
    return [dy1_dt, dy2_dt]

# Condições iniciais
y0 = [0, 0]  # Corrente inicial e derivada da corrente inicial

# Intervalo de tempo para a simulação
t_span = (0, 10)  # De 0 a 10 segundos
t_eval = np.linspace(t_span[0], t_span[1], 500)  # Pontos onde a solução é calculada

# Resolvendo a equação diferencial
sol = solve_ivp(rlc_circuit, t_span, y0, t_eval=t_eval)

# Extraindo os resultados
t = sol.t
i = sol.y[0]  # Corrente i(t)

# Plotando os resultados
plt.plot(t, i, label='i(t)')
plt.xlabel('Tempo (s)')
plt.ylabel('Corrente (A)')
plt.title('Resposta do Circuito RLC em Série')
plt.legend()
plt.grid()
plt.show()