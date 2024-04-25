import 'package:flutter/material.dart';

void main() {
  runApp(const CalculadoraSimples());
}

class CalculadoraSimples extends StatelessWidget {
  const CalculadoraSimples({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Soma de Dois Números',
      theme: ThemeData(
        primarySwatch: Colors.pink,
      ),
      home: const SomaNumeros(),
    );
  }
}

class SomaNumeros extends StatefulWidget {
  const SomaNumeros({super.key});

  @override
  SomaNumerosState createState() => SomaNumerosState();
}

class SomaNumerosState extends State<SomaNumeros> {
  final TextEditingController _num1Controller = TextEditingController();

  int numNext = 0;
  int numPrev = 0;

  void _calculateSum() {
    int num = int.parse(_num1Controller.text);

    setState(() {
      numNext = num + 1;
      numPrev = num - 1;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Número Posterior e Anterior'),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            TextField(
              controller: _num1Controller,
              keyboardType: TextInputType.number,
              decoration: const InputDecoration(
                labelText: 'Digite um número inteiro',
              ),
            ),

            const SizedBox(height: 20),

            ElevatedButton(
              onPressed: _calculateSum,
              style: ElevatedButton.styleFrom(
                primary: Colors.pinkAccent,
              ),
              child: const Text('Exibir Números'),
            ),

            // sexto elemento da lista

            const SizedBox(height: 20),

            Text(
              'O número anterior é $numPrev posterior é $numNext',
              style: const TextStyle(fontSize: 24),
            ),
          ],
        ),
      ),
    );
  }
}
