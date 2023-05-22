# TUTORIAL

# Creazione Progetto
Creare una cartella per il progetto sul Desktop e chiamarla come si desidera. Su git-bash eseguire:
```
cd $HOME/path/to/<nome del file>
```
dove ``` path/to/ ``` rappresenta il percorso del file

Creare un file ``` README.md ``` in Blocco note, che sarà il readme file del repository Git, e scrivere al suo interno la traccia dell'esercitazione indicata su Classroom. Salvare il file.

# Creazione reopsitory su Github
* aprire il sito github.com
* Effettuare il login
* Cliccare su ``` new ```

![image](https://github.com/Bussinell/esercitazione16maggio/assets/131137596/28e505da-9adc-47a1-9a0e-a9212c9d3dc1)
* Creare un nuovo repository nome del file, prestando attenzione a non creare un Readme di default.

![](createNewRepository.png)![image](https://github.com/Bussinell/esercitazione16maggio/assets/131137596/64702f6b-275a-45a2-a3d5-65bfedf9ffeb)
# Configurazione del repository locale e sincronizzazione
Da ``` git-bash ``` eseguire i seguenti comandi:
```
git init  # Inizializza il repository locale
git add README.md  # Inserimento del file README.md nell'area di staging
git commit -m "first commit"  # Creazione del primo commit, che serve a sincronizzare il repository locale con lo stage
git branch -M main  # Creazione del branch main, da usare come default
git remote add origin https://github.com/<username>/Esercitazione16maggio  # Connessione del repository remoto al repository locale
git push -u origin main  # Sincronizzazione del repository remoto con quello locale
```

# Inserire immagini nel README.md
Aggiungere l'immagine ``` img.jpg ``` al progetto ed inserirla nel testo con il seguente comando: ``` ![](img.png) ```
# Inserire sezioni
Le sezioni possono essere create inserendo un ``` # ``` prima del titolo della sezione. Si può modificare il tipo di sezione usando da uno a sei ``` # ```. È importante separare i ``` # ``` dal titolo con uno spazio.
# Inserire codice e citazioni
Il codice può essere inserito delimitandolo con tre backtick `.

Le citazioni possono essere fatte aggiungendo > prima del testo.
