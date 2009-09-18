        \context Staff = "track 2" << 
            \set Staff.instrumentName = "Cuerdas"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 2" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                
                \clef "treble"
                \key a \major
                < a' cis'' e'' > 1  |
                < e' gis' b' > 1  |
                < d' fis' a' > 1  |
%% 5
                < e' gis' b' > 1  |
                < d' fis' a' > 1  |
                < b' gis' e' > 1  |
                < f' a' c'' e'' > 1  |
                < g' b' d'' e'' > 1  |
%% 10
                < a' cis'' e'' > 1  |
                < e' gis' b' > 1  |
                < e'' cis'' a' > 1 ~  |
                < b' e'' gis' > 1  |
                < cis'' fis' a' > 1  |
%% 15
                < b' e' cis' gis' > 1  |
                < d' fis' a' > 1  |
                < b' e' gis' > 1  |
                < e'' cis'' a' > 2 < b' e' gis' >  |
                < d' a' fis' > 1 ~  |
                \bar "|."
            } % Voice
        >> % Staff
