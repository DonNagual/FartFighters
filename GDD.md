# Fart Fighters – Game Design Document

**NarrativeNexus**  
**Revision:** 1.0.1  
**Autor:** DonNagual  

---

## 1. Überblick
- **Spielname (Arbeitstitel):** Fart Fighters  
- **Genre:** Multiplayer-Action / Fun-Brawler  
- **Plattform:** PC  
- **Engine:** Unreal Engine 5  
- **Perspektive:** Third-Person (TPS)  
- **Zielgruppe:** Casual-Gamer, Partyspieler, Streamer  

### Kurzbeschreibung
In einem chaotischen Labyrinth voller Fallen und Power-ups liefern sich Spieler stinkende Duelle mit Furz- und Kack-Kombos. Hightech-Unterhosen, verrückte Gadgets und clevere Verteidigung sorgen für Chaos und Taktik.  
**Ziel:** Überleben, Gegner ausschalten und vor Ablauf der Zeit die Vorherrschaft sichern.

---

## 2. Kern-Gameplay

### 2.1 Spielerziel
- Gegner finden, Nahrung sammeln, Furze aufladen und abfeuern.  
- Power-ups für Angriff, Verteidigung oder Utility einsammeln.  
- Kreative Kills bringen Extrapunkte.  
- Die Rangliste anführen.  

### 2.2 Hauptmechaniken
- **Essen & Trinken**  
  - Nahrung füllt die „Gasleiste“.  
  - Jede Nahrung hat eigene Aufladezeit und Spezialeffekte.  
  - Beispiele:  
    - *Chili*: schnell, brennbar  
    - *Brokkoli*: langsam, radioaktiv, DoT-Effekt  

- **Furz-Angriffe**  
  - Aufladung = mehr Schaden oder Reichweite.  
  - Hightech-Unterhosen modifizieren Effekte: Strahl, AoE, Splitter, Schnellschuss.  
  - Richtungsbasierte Angriffe: Spieler muss sich umdrehen → AoE nach hinten.  
  - Furz-Eigenschaften:  
    - Brennbar → Feuerschaden, Kettenreaktionen  
    - Klebrig → Schaden über Zeit + Verlangsamung  
    - Explosiv → AoE-Schaden, Knockback  
    - Radioaktiv → Langzeit-Debuff  
    - Turbo → Stoß-Effekt, Gegner wegschieben  

- **Kack-Bomben**  
  - Spieler legt Bombe → benötigt mehr Nahrung & längere Ladezeit.  
  - Varianten: Walnuss (Splitter), Feucht (Rutschig), Klebrig (Immobilisieren), Radioaktiv (Schadenszone)  
  - Kann mit Feuerfurz gezündet werden → Kettenreaktionen möglich.  

- **Defensive Ausrüstung**  
  - Gasmaske → Immunität gegen Gift  
  - Ventilator-Anzug → Bläst Gaswolken weg  
  - Schutzblase → Absorbiert Treffer  
  - Gummistiefel → Immun gegen Rutschflächen  

- **Utility-Power-ups**  
  - Unsichtbarkeit, Speed-Boost, Radar  

---

## 3. Spielflow
- **Lobby & Matchmaking**  
  - Skins, Unterhosen, Loadouts wählen  
  - Start mit voller oder leerer Gasleiste  
- **Matchstart**  
  - Spieler spawnen zufällig  
  - Nahrung sammeln, Angriffe vorbereiten  
- **Gameplay**  
  - Kämpfen mit Furzen, Kack-Bomben, Power-ups & Gadgets  
  - Kreative Kills bringen Bonuspunkte  
- **Matchende**  
  - Bestenliste, Sieger erhält Titel ("König der Lüfte")  
  - Erfahrungspunkte für Skins & Cosmetics  

---

## 4. Steuerung
| Aktion                | Taste                 |
|-----------------------|-----------------------|
| Bewegen               | WASD                  |
| Kamera drehen         | Maus                  |
| Springen              | Leertaste             |
| Sprinten              | Shift                 |
| Furz aufladen          | Rechte Maustaste      |
| Furz abfeuern          | Linke Maustaste       |
| Kack-Bombe legen       | Q                     |
| Gadget/Power-up nutzen | E                     |
| Ducken                 | C                     |
| Essen / Trinken        | F                     |

---

## 5. Spielmodi
- Free-for-all (FFA)  
- Team-Battle  
- King of the Hill  
- Capture the Flag  
- Survival-Modus  
- Last Fart Standing (Battle Royale)  

---

## 6. Leveldesign
- Labyrinth-Maps mit vertikalen Ebenen, Tunneln, Sprungpads, Lüftungsschächten  
- Food-Spawns: Risk vs. Reward  
- Dynamische Fallen: Ventilatoren, Gaslecks, Lava  
- Geheime Räume mit Power-ups oder Spezialnahrung  

---

## 7. Progression & Belohnungen
- Erfahrungspunkte für Matches, Kills, Aktionen  
- Neue Skins, Unterhosen, Gadgets freischaltbar  
- Perksystem: Schnellaufladung, extra Reichweite  
- Ranglisten: wöchentlich & monatlich  

---

## 8. Audio & Humor
- Cartoonartige Furz-Sounds  
- Lustige Kommentare: *"Das war ein heißer Furz!"*  
- Streamer-Support: Chat-Commands für Events  

---

## 9. Technik & Multiplayer
- **Engine:** Unreal Engine 5  
- **Netzwerk:** Peer-to-Peer, später Dedicated Server  
- **Max Spieler:** 8–16 pro Match  
- **DataTables:** Balancing für Nahrung & Power-ups  

---

## 10. Monetarisierung
- Cosmetics: Skins, Unterhosen, Sounds  
- Season Pass: Spezialnahrung, exklusive Maps  

---

## 11. Erste Roadmap
- **Prototyp (4–6 Wochen):**  
  - Basisbewegung, Essen, Aufladung, einfacher Angriff  
  - Multiplayer-Lobby  
  - Kleine Map  

- **Core-Gameplay (8–12 Wochen):**  
  - Power-ups  
  - Punktesystem  
  - Lobby & Matchende  

- **Polishing & Extras (12+ Wochen):**  
  - Skins, Effekte  
  - Mehr Maps  
  - Audio & Humor  

---

## 12. Beispiel-Nahrungstabelle

| Nahrung       | Ladezeit (Sek.) | Effekt          | Besonderheit        |
|---------------|----------------|----------------|---------------------|
| Chili          | 5–8            | Brennbar        | Kettenreaktionen    |
| Bohnen         | 10–15          | Explosiv        | Großer AoE          |
| Brokkoli       | 20–30          | Radioaktiv      | Langzeit-Debuff      |
| Soda           | 3–6            | Turbo (Knockback)| Schnelle Aufladung  |
| Käsefondue     | 12–16          | Klebrig         | Gegner verlangsamt   |
