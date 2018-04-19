#ifndef EMPREGADO_H_
#define EMPREGADO_H_

class Empregado {
	private:
		string nome;
		string sobrenome;
		double salario;
	public:
		Empregado();
		Emrpegado(string, string, double);
		virtual ~Empregado();
		string getNome();
		string getSobrenome();
		double getSalario();
		void setNome(string);
		void setSobrenome(string);
		void setSalario(double);
		bool verificaEmpregado();
		void Aumento();
};

#endif
