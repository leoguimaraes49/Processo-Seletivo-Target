import json
import os

#Obtém o diretório onde o código está sendo executado
current_dir = os.path.dirname(__file__)

#Constrói o caminho completo do arquivo JSON
file_path = os.path.join(current_dir, 'faturamento.json')

#Abre e carrega os dados de faturamento diário do arquivo JSON
with open(file_path) as file:
    faturamento = json.load(file)

#Filtra os dias com faturamento (exclui os finais de semana e feriados)
dias_com_faturamento = [dia['valor'] for dia in faturamento if dia['valor'] > 0]

#Menor e maior valor de faturamento
menor_faturamento = min(dias_com_faturamento)
maior_faturamento = max(dias_com_faturamento)

#Média mensal
media_mensal = sum(dias_com_faturamento) / len(dias_com_faturamento)

#Dias com faturamento acima da média
dias_acima_da_media = len([dia for dia in dias_com_faturamento if dia > media_mensal])

#Exibe os resultados
print(f"Menor faturamento: R${menor_faturamento}")
print(f"Maior faturamento: R${maior_faturamento}")
print(f"Dias com faturamento acima da média: {dias_acima_da_media}")
