<?php
/**
 * Created by PhpStorm.
 * User: Chubs
 * Date: 12/7/2016
 * Time: 11:24 PM
 */
?>
<!-- Navigation -->
<nav class="navbar navbar-inverse navbar-fixed-top" role="navigation">
    <div class="container">
        <!-- Brand and toggle get grouped for better mobile display -->
        <div class="navbar-header">
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </button>
            <a class="navbar-brand" href="#">Start Bootstrap</a>
        </div>
        <!-- Collect the nav links, forms, and other content for toggling -->
        <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
            <ul class="nav navbar-nav">
                <?php CreateNavigation("main", "all"); ?>
<?php if(IsOnline() == false) { CreateNavigation("main", "guest");  } ?>
</ul>
<ul class="nav navbar-nav navbar-right">
    <?php if(IsOnline() == true) { CreateNavigation("main", "user"); } ?>

</ul>
</div>
<!-- /.navbar-collapse -->
</div>
<!-- /.container -->
</nav>