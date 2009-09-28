	\context ChordNames
		\chords {
		\set majorSevenSymbol = \markup { "maj7" }

		% intro
		a1 e1 d1 e1 d1 e1 f1:maj7 g1:6 a1:maj7 e1

		% estrofa 1
		a1 e1:/gis fis1:m cis1:m7 d1 e1 a2 e2 d1

		% estrofa 2
		a1 e1:/gis fis1:m cis1:m7 d1 e1 a2 e2 d1

		% puente 1
		d1 e1 a2 e2:/gis d1:maj7
		d1 e1 a1 e1

		% coro 1
		%% TODO: quitar r2
		a4. e8:/a ~ r2 d4.:/a e8:/a ~ r2
		a4. e8:/a ~ r2 d4.:/a e8:/a ~ r2
		a2 e2 d4. e8 ~ r2
		a2 e2 %...

		% interludio
		a2 e2 d2 e2
		a2 e2 d2 e2
		a2 e2 d2 e2
		a2 e2 d2 e2

		% estrofa 3
		a1 e1:/gis fis1:m cis1:m7 d1 e1 a2 e2 d1

		% estrofa 4
		a1 e1:/gis fis1:m cis1:m7 d1 e1 a2 e2 d1

		% puente 2
		d1 e1 a2 e2:/gis d1:maj7
		d1 e1 a1 e1

		% coro 2
		%% TODO: quitar r2
		a4. e8:/a ~ r2 d4.:/a e8:/a ~ r2
		a4. e8:/a ~ r2 d4.:/a e8:/a ~ r2
		a2 e2 d4. e8 ~ r2
		a2 e2 %...
		a1 e1

		% coro 3
		r1 r1 r1 r1
		a2 e2 d4. e8 ~ r2
		a2 e2 %...

		% finale
		a2 e2 d2 e2
		a2 e2 d2 e2
		a2 e2 d2 e2
		d1:maj7
		f1:maj7sus2
		a1:maj7
		}
