        \context Staff = "mezzo" \with { \consists Ambitus_engraver } << 
            \set Staff.instrumentName = "Mezzo"
            \set Staff.shortInstrumentName = "M"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 9" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key a \major
                R1*91  |
                cis' 2 e'  |
                d' 4. d' 4 r8 d' 4  |
%% 95
                cis' 4. r8 cis' 4 e'  |
                d' 4. d' 4 r8 d' 4  |
                cis' 1  |
                R1*3  |
                \bar "|."
            } % Voice

	\lyricsto "voice 9" \new Lyrics \lyricmode {
		% [12] finale
		Mi sio ne ro de Dios,
		mi sio ne ro de Dios.
        } % Lyrics

        >> % Staff
