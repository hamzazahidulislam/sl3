public class Main {
    public static void main(String[] args) {
//        String[] playlist = {
//                "Song 1.mp3",
//                "Song 2.mp3",
//                "Song 3.mp3",
//        };
//
//        Player player = new AudioPlayer(playlist);
//        player.play();
//        player.next();
//        player.play();
//        player.next();
//        player.pause();

//        Player videoPlayer = new Player(new String[]{"video1.mp4","video2.mp4"}) {
//            @Override
//            public void play() {
//                System.out.println(playlist[currentSong]);
//            }
//
//            @Override
//            public void pause() {
//                System.out.println(playlist[currentSong]);
//            }
//        };
        //<----------->
//        String[] playlist2 = {
//                "video1.mp4",
//                "video2.mp4",
//        };
//        Player videoPlayer = new VideoPlayer(playlist2);
//        videoPlayer.play();
//        videoPlayer.next();
//        videoPlayer.play();
        //<-------->/
//        Player[] musics = {
//                new AudioPlayer(new String[]{"song1.mp3"}),
//                new AudioPlayer(new String[]{"song2.mp3"}),
//                new VideoPlayer(new String[]{"video1.mp4"}),
//                new AudioPlayer(new String[]{"song3.mp3"}),
//                new VideoPlayer(new String[]{"video2.mp4"}),
//                new VideoPlayer(new String[]{"video3.mp4"}),
//        };
//        for (int i=0;i< musics.length;i++){
//            musics[i].play();
//        }
        //<--------------->
//        Player player = new AudioPlayer(new String[]{
//                "song1.mp3",
//                "song2.mp3",
//                "song3.mp3",
//        });
//        player.play().next().play().next().play().next().pause().play().pause().next().play().previous().previous().play();
        //<------------------->
        ProdcastPlayer player = new ProdcastPlayer(new String[] {
                "song1.mp3",
                "song2.mp3",
                "song3.mp3",
        });
//        player.play();
//        player.next();
//        player.play();
        player.play().next().play().next().play().next().pause().play().pause().next().play().previous().previous().play();
    }
}
