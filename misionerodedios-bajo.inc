        \context Staff = "track 1" << 
            \set Staff.instrumentName = "Bajo"
            \set Staff.shortInstrumentName = "B"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 1" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                
                \clef "bass"
                \key a \major
                a, 2. a, 4  |
                e 2. e 4  |
                d 2. d 8 fis  |
%% 5
                e 4. b, e 4  |
                d 4. a, d 4  |
                e 2. e 4  |
                f, 4. c, f, 8 fis,  |
                g, 4. d, g, 8 gis,  |
                a, 4. e, a, 4  |
		e, 1  |
%% 11
		% estrofa 1
                a, 1  |  gis, 1  |  fis, 1  |  cis, 1  |
		d, 1  |  e, 1  |  a, 2 e,  | d, 1  |
%% 19
		% estrofa 2
                a, 1  |  gis, 1  |  fis, 1  |  cis, 1  |
		d, 1  |  e, 1  |  a, 2 e,  | d, 1  |
%% 27
		% puente 1
                d, 1  |  e, 1  |  a, 2 gis,  |  d 1  |
                d, 1  |  e, 1  |  a, 1  |  e, 1  |
%% 35
		% coro 1
                a, 4 a, 8 < a a, > ~ < a a, > 2  |
                a, 4 a, 8 a, ~ a, 2  |
                a, 4 a, 8 < a, a > ~ < a a, > 2  |
                a, 4 a, 8 a, ~ a, 2  |
                a, 2 e,  |
                d, 4. e, 8 ~ e, 2  |
                a, 2 e,  | %...
%% 42
		% intermedio
                a, 2 e,  |  d, 2 e,  |  a, 2 e,  |  d, 2 e,  |
                a, 2 e,  |  d, 2 e,  |  a, 2 e,  |  d, 2 e,  |
%% 50
		% estrofa 3
                a, 1  |  gis, 1  |  fis, 1  |  cis, 1  |
		d, 1  |  e, 1  |  a, 2 e,  | d, 1  |
%% 58
		% estrofa 4
                a, 1  |  gis, 1  |  fis, 1  |  cis, 1  |
		d, 1  |  e, 1  |  a, 2 e,  | d, 1  |
%% 66
		% puente 2
                d, 1  |  e, 1  |  a, 2 gis,  |  d 1  |
                d, 1  |  e, 1  |  a, 1  |  e, 1  |
%% 74
		% coro 2
                a, 4 a, 8 < a a, > ~ < a a, > 2  |
                a, 4 a, 8 a, ~ a, 2  |
                a, 4 a, 8 < a, a > ~ < a a, > 2  |
                a, 4 a, 8 a, ~ a, 2  |
                a, 2 e,  |
                d, 4. e, 8 ~ e, 2  |
                a, 2 e,  |
		a, 1  |  e, 1  |

		% coro 3
                a, 4. a, 8 ~ a, 2  |
                a, 4. a, 8 ~ a, 2  |
                a, 4. a, 8 ~ a, 2  |
                a, 4. a, 8 ~ a, 2  |
                a, 2 e,  |
                d, 4. e, 8 ~ e, 2  |
%% 90
                a, 2 e,  |
                a, 2 e,  |
                d, 2 e,  |
                a, 2 e,  |
                d, 2 e,  |
%% 95
                a, 2 e,  |
                d, 2 e,  |
                d 1  |
                f, 1 _( 
                % warning: overlong bar truncated here |
                 a, 1 ~ )  |  a, 2  r  |
                \bar "|."
            } % Voice
        >> % Staff
